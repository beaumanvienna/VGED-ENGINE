#include "pipeline.hpp"
#include "utils.hpp"

namespace VGED {
    namespace Engine {
        inline namespace Graphics { 
            RasterizationPipeline::RasterizationPipeline(const RasterizationPipelineInfo& info) {
                
            }

            std::vector<u32> RasterizationPipeline::get_spirv(const ShaderInfo& info) {
                std::vector<u32> spirv = {};
                if(auto shader_source = std::get_if<ShaderFile>(&info.source)){
                    std::string shader_code = read_file_to_string(shader_source->path);
                }

                if(auto shader_source = std::get_if<ShaderCode>(&info.source)){

                }

                if(auto shader_source = std::get_if<ShaderSPIRV>(&info.source)){

                }
            }
        }
    }
}