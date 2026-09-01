
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
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ColorAverage
            : public Object
         {

    private: float avgRed= 0.0;

    private: float avgGreen= 0.0;

    private: float avgBlue= 0.0;

public: ColorAverage(){
this->setAvgRed(0);
    
this->setAvgGreen(0);
    
this->setAvgBlue(0);
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("getAvgRed(): ");
    
stringBuffer.appendfloat(this->getAvgRed());
    
stringBuffer.append(CommonSeps::getInstance().NEW_LINE);
    
stringBuffer.append("getAvgRed(): ");
    
stringBuffer.appendfloat(this->getAvgRed());
    
stringBuffer.append(CommonSeps::getInstance().NEW_LINE);
    
stringBuffer.append("getAvgGreen(): ");
    
stringBuffer.appendfloat(this->getAvgGreen());
    
stringBuffer.append(CommonSeps::getInstance().NEW_LINE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: float getAvgRed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->avgRed;
    
}


    public: void setAvgRed(float avgRed){
this->avgRed= avgRed;
    
}


    public: float getAvgGreen(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->avgGreen;
    
}


    public: void setAvgGreen(float avgGreen){
this->avgGreen= avgGreen;
    
}


    public: float getAvgBlue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->avgBlue;
    
}


    public: void setAvgBlue(float avgBlue){
this->avgBlue= avgBlue;
    
}


};

            

