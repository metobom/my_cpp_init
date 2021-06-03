#include <iostream>
#include <torch/torch.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <zmq.hpp>
#include <string>


namespace metolib
{
    cv::Mat tensor2mat(torch::Tensor tensor, int h, int w, int channels)
    {
        // Duzgun size'larda bos resim olustur.
        cv::Mat out_image = cv::Mat(h, w, CV_8UC3);
        // NCHW'i HWC'a cevir.
        tensor = tensor.squeeze(0).permute({1, 2, 0});
        // Eger tensor CUDA'da ise CPU'ya cevir.
        if(tensor.device().type() == torch::kCUDA) tensor.to(torch::kCPU);
        // convert 
        std::memcpy(out_image.data, tensor.data_ptr(), sizeof(tensor.dtype()) * tensor.numel());
        return out_image;
    }


    torch::Tensor mat2tensor(cv::Mat image, int h, int w, int channels)
    {
        torch::Tensor out_tensor = torch::from_blob(image.data, {h, w, channels}, at::kByte).permute({2, 0, 1}).unsqueeze(0);
        return out_tensor; 
    }
}