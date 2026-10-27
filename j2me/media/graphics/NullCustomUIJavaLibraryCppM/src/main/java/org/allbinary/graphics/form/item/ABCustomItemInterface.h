
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ABCustomItemInterface
            : public virtual Object
         {

    public: virtual int32_t getMinimumWidth() = 0;

    public: virtual int32_t getMinimumHeight() = 0;

    public: virtual std::string getLabel() = 0;

    public: virtual void paintXY(Graphics* graphics, int32_t x, int32_t y) = 0;

    public: virtual void paintUnselected(Graphics* graphics, int32_t x, int32_t y) = 0;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif

        #endif
    
