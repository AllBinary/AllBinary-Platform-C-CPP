
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
        

    public static NULL_CUSTOM_ITEM: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static ABCustomItem getNullInstance(){

                        if(ABCustomItem.NULL_CUSTOM_ITEM == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    ABCustomItem.NULL_CUSTOM_ITEM= new ABCustomItem(StringUtil.getInstance()!.EMPTY_STRING, BasicColorFactory.getInstance()!.BLACK, BasicColorFactory.getInstance()!.WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ABCustomItem.NULL_CUSTOM_ITEM as ABCustomItem;
    
}


protected constructor (string label, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){

            super();
        }


    public setOwner(Screen owner){
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
}


    public paintUnselected(Graphics graphics, int32_t x, int32_t y){
}


    public bool isFocusable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string getLabel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}


    public setLabel(string label){
}


    public int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public setHeight(int32_t height){
}


    public float getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0.0;
    
}


    public setValue(float value){
}


    public int32_t getMinimumWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public int32_t getMinimumHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public preMeasurement(Graphics graphics){
}


};

            

