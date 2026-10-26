
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DisplayInfoSingleton.h"

class ScreenRelationalUtil
            : public Object
         {

    private: static ScreenRelationalUtil instance() { return ScreenRelationalUtil(); }

    public: static ScreenRelationalUtil getInstance();

    public: float getScaleImage(Image image);

    public: float getScaleWH(int32_t aWidth, int32_t aHeight);

    public: float getScaleWHA(int32_t aWidth, int32_t aHeight, int32_t add);

    public: int32_t getScaledHeight(int32_t aWidth, int32_t aHeight);

    public: int32_t getScaledHeightAdd(int32_t aWidth, int32_t aHeight, int32_t add);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREENRELATIONALUTIL_H
