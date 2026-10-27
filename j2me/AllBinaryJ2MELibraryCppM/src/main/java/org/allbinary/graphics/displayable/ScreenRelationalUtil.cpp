
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/ScreenRelationalUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"


ScreenRelationalUtil::ScreenRelationalUtil() {
        }
        auto ScreenRelationalUtil::instance_owner() -> ScreenRelationalUtil* { static std::unique_ptr<ScreenRelationalUtil> value(new ScreenRelationalUtil()); return value.get(); }
ScreenRelationalUtil* ScreenRelationalUtil::instance = ScreenRelationalUtil::instance_owner();

    auto ScreenRelationalUtil::getInstance() -> ScreenRelationalUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScreenRelationalUtil::instance;
    
}


    auto ScreenRelationalUtil::getScaleImage(Image* image) -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getScaleWH(image->getWidth(), image->getHeight());;
    
}


    auto ScreenRelationalUtil::getScaleWH(int32_t aWidth, int32_t aHeight) -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getScaleWHA(aWidth, aHeight, 20);;
    
}


    auto ScreenRelationalUtil::getScaleWHA(int32_t aWidth, int32_t aHeight, int32_t add) -> float{

    DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    

    std::vector<int32_t> last = displayInfoSingleton->getLast();;
    

    float width = last[displayInfoSingleton->WIDTH];;
    

    float height = last[displayInfoSingleton->HEIGHT];;
    

    float largestSize = width;;
    

                        if(largestSize < height)
                        
                                    {
                                    largestSize= height;
    

                                    }
                                

    float scale = (largestSize) /aWidth;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scale;
    
}


    auto ScreenRelationalUtil::getScaledHeight(int32_t aWidth, int32_t aHeight) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this->getScaleWH(aWidth, aHeight) *aHeight));
    
}


    auto ScreenRelationalUtil::getScaledHeightAdd(int32_t aWidth, int32_t aHeight, int32_t add) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this->getScaleWHA(aWidth, aHeight, add) *aHeight));
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_CPP
