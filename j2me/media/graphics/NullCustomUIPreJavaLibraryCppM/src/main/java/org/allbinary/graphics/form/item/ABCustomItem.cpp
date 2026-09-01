
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Screen.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ABCustomItem
            : public Object
         {

    public: static Object* NULL_CUSTOM_ITEM = NullUtil::getInstance().NULL_OBJECT;

    public: static ABCustomItem getNullInstance(){

                        if(ABCustomItem::NULL_CUSTOM_ITEM == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    ABCustomItem::NULL_CUSTOM_ITEM= ABCustomItem(StringUtil::getInstance().EMPTY_STRING, BasicColorFactory::getInstance().BLACK, BasicColorFactory::getInstance().WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ABCustomItem::NULL_CUSTOM_ITEM as ABCustomItem;
    
}


protected: ABCustomItem(std::string label, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
}


    public: void setOwner(Screen owner){
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
}


    public: void paintUnselected(Graphics graphics, int32_t x, int32_t y){
}


    public: bool isFocusable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string getLabel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


    public: void setLabel(std::string label){
}


    public: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void setHeight(int32_t height){
}


    public: float getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0.0;
    
}


    public: void setValue(float value){
}


    public: int32_t getMinimumWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int32_t getMinimumHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void preMeasurement(Graphics graphics){
}


};

            

