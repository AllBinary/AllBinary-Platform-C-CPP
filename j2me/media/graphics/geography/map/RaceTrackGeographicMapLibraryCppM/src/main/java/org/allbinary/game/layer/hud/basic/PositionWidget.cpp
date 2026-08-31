
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //super.paint(graphics, positionString, currentPostString, offset2, offset);
class PositionWidget: public BasicHud {
        

    public static string toString(int32_t position){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(position.toString());
    

                        if(position == 1)
                        
                                    {
                                    stringBuffer!.append("st");
    

                                    }
                                
                             else 
                        if(position == 2)
                        
                                    {
                                    stringBuffer!.append("nd");
    

                                    }
                                
                             else 
                        if(position == 3)
                        
                                    {
                                    stringBuffer!.append("rd");
    

                                    }
                                
                        else {
                            stringBuffer!.append("th");
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    private: position: int32_t= 0;

    private: positionString: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (int32_t position, int32_t location, int32_t direction, BasicColor basicColor){
            super(location, direction, 2, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.updateMaxHeight= 10;
    
this.updateMaxWidth= 40;
    
}


    public int32_t get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.position;
    
}


    public set(int32_t position){
this.position= position;
    
this.positionString= PositionWidget.toString(this.get());
    
}


    public paint(Graphics graphics){
super.paintString(graphics, this.positionString);
    
}


};

            

