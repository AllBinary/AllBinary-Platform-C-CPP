
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ABCustomItemInterface {

    public: virtual int32_t getMinimumWidth() = 0;

    public: virtual int32_t getMinimumHeight() = 0;

    public: virtual std::string getLabel() = 0;

    public: virtual void paintXY(Graphics* graphics, int32_t x, int32_t y) = 0;

    public: virtual void paintUnselected(Graphics* graphics, int32_t x, int32_t y) = 0;

};

            

