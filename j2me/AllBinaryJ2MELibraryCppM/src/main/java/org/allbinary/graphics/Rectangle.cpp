
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GPoint.h"

class Rectangle
            : public Object
         {

    private: GPoint point;

    private: int32_t width;

    private: int32_t height;

public: Rectangle(GPoint point, int32_t width, int32_t height){
this->point= point;
    
this->width= width;
    
this->height= height;
    
}


    public: GPoint getPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    public: void setPoint(GPoint point){
this->point= point;
    
}


    public: int32_t getMaxX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point.getX() +this->width;
    
}


    public: int32_t getMaxY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point.getY() +this->height;
    
}


    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    public: void setWidth(int32_t width){
this->width= width;
    
}


    public: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    public: void setHeight(int32_t height){
this->height= height;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->getPoint().toString());
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(CommonLabels::getInstance().WIDTH_LABEL);
    
stringBuffer.appendint(this->getWidth());
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
stringBuffer.append(CommonLabels::getInstance().HEIGHT_LABEL);
    
stringBuffer.appendint(this->getHeight());
    
stringBuffer.append(" MaxX: ");
    
stringBuffer.appendint(this->getMaxX());
    
stringBuffer.append(" MaxY: ");
    
stringBuffer.appendint(this->getMaxY());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

