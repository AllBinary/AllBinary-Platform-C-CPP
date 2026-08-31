
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <java/awt.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ColorRangeInterface.h"
#include "Color.h"

class ColorRange
            : public Object
        : public ColorRangeInterface {
        

    private: minRed: int32_t;

    private: maxRed: int32_t;

    private: minGreen: int32_t;

    private: maxGreen: int32_t;

    private: minBlue: int32_t;

    private: maxBlue: int32_t;

public constructor (){

            super();
        this.minRed= 0;
    
this.maxRed= 0;
    
this.minGreen= 0;
    
this.maxGreen= 0;
    
this.minBlue= 0;
    
this.maxBlue= 0;
    
}


    public int32_t getMinRed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minRed;
    
}


    public setMinRed(int32_t minRed){
this.minRed= minRed;
    
}


    public int32_t getMaxRed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxRed;
    
}


    public setMaxRed(int32_t maxRed){
this.maxRed= maxRed;
    
}


    public int32_t getMinGreen(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minGreen;
    
}


    public setMinGreen(int32_t minGreen){
this.minGreen= minGreen;
    
}


    public int32_t getMaxGreen(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxGreen;
    
}


    public setMaxGreen(int32_t maxGreen){
this.maxGreen= maxGreen;
    
}


    public int32_t getMinBlue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minBlue;
    
}


    public setMinBlue(int32_t minBlue){
this.minBlue= minBlue;
    
}


    public int32_t getMaxBlue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxBlue;
    
}


    public setMaxBlue(int32_t maxBlue){
this.maxBlue= maxBlue;
    
}


    public bool isInRange(Color color){

                        if(color.getRed() >= this.getMinRed() && color.getRed() <= this.getMaxRed() && color.getGreen() >= this.getMinGreen() && color.getGreen() <= this.getMaxGreen() && color.getBlue() >= this.getMinBlue() && color.getBlue() <= this.getMaxBlue())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("getMinRed(): ");
    
stringBuffer!.appendint(this.getMinRed());
    
stringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
stringBuffer!.append("getMaxRed(): ");
    
stringBuffer!.appendint(this.getMaxRed());
    
stringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
stringBuffer!.append("getMinGreen(): ");
    
stringBuffer!.appendint(this.getMinGreen());
    
stringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
stringBuffer!.append("getMaxGreen(): ");
    
stringBuffer!.appendint(this.getMaxGreen());
    
stringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
stringBuffer!.append("getMinBlue(): ");
    
stringBuffer!.appendint(this.getMinGreen());
    
stringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
stringBuffer!.append("getMaxBlue(): ");
    
stringBuffer!.appendint(this.getMaxBlue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

