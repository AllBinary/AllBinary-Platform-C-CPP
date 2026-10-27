
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_POLYGONRASTERIZER_H
        #define ORG_ALLBINARY_ANIMATION_POLYGONRASTERIZER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PathParser;
class FixedPoint;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PolygonRasterizer
            : public virtual Object
         {

    private: static PolygonRasterizer* instance_owner();
    private: static PolygonRasterizer* instance;

    public: static PolygonRasterizer* getInstance();


            
    public: PolygonRasterizer();
        
    public: std::vector<int32_t> getPixelBuffer(std::string svgPath, std::vector<int32_t> pathX, std::vector<int32_t> pathY, std::vector<int32_t> pixelBuffer, int32_t width, int32_t height);

    public: void fillPolygon(std::vector<int32_t> polyX, std::vector<int32_t> polyY, int32_t numPoints, std::vector<int32_t> buffer, int32_t width, int32_t height, int32_t colorRGB);

    public: void main(std::vector<std::string> args);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_POLYGONRASTERIZER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_POLYGONRASTERIZER_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_POLYGONRASTERIZER_H_COMPLETE
        #if __has_include("org/allbinary/animation/PathParser.h")
#include "org/allbinary/animation/PathParser.h"
#endif
#if __has_include("org/allbinary/animation/FixedPoint.h")
#include "org/allbinary/animation/FixedPoint.h"
#endif

        #endif
    
