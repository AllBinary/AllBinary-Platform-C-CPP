
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_POLYGONRASTERIZER_H
        #define ORG_ALLBINARY_ANIMATION_POLYGONRASTERIZER_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/PathParser.h"
#include "org/allbinary/animation/FixedPoint.h"

class PolygonRasterizer
            : public Object
         {

    private: static PolygonRasterizer* instance() { static std::unique_ptr<PolygonRasterizer> value(new PolygonRasterizer()); return value.get(); }

    public: static PolygonRasterizer* getInstance();

    public: std::vector<int32_t> getPixelBuffer(std::string svgPath, std::vector<int32_t> pathX, std::vector<int32_t> pathY, std::vector<int32_t> pixelBuffer, int32_t width, int32_t height);

    public: void fillPolygon(std::vector<int32_t> polyX, std::vector<int32_t> polyY, int32_t numPoints, std::vector<int32_t> buffer, int32_t width, int32_t height, int32_t colorRGB);

    public: void main(std::vector<std::string> args);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_POLYGONRASTERIZER_H
