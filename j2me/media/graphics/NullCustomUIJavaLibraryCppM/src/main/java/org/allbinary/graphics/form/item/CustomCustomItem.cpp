
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABCustomItem.h"

class CustomCustomItem: public ABCustomItem, public UpdateMyFontInterface {

    protected: MyFontProcessor* updateMyFontProcessor = new UpdateMyFontProcessor(this);

    protected: MyFontProcessor* myFontProcessor = this->updateMyFontProcessor;

protected: CustomCustomItem(std::string label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ABCustomItem(label, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void updateMeasurement(Graphics* graphics){
}


};

            

