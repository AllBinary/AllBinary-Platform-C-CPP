
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
        
            #include "java/lang/IllegalArgumentException.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Layer
            : public Object
         {

    public: static const Integer ID = SmallIntegerSingletonFactory::getInstance().getAt(0);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: int32_t x= 0;

    protected: int32_t y= 0;

    protected: int32_t z = 3;

    private: int32_t width= 0;

    private: int32_t height= 0;

    private: bool visible = true;

public: Layer(int32_t width, int32_t height){
this->setLayerWidth(width);
    
this->setLayerHeight(height);
    
}


    public: void setPosition(int32_t x, int32_t y, int32_t z){
this->x= x;
    
this->y= y;
    
this->z= z;
    
}


    public: void moveDXY(int32_t dx, int32_t dy){
this->x += dx;
    
this->y += dy;
    
}


    public: void moveDXYZ(int32_t dx, int32_t dy, int32_t dz){
this->x += dx;
    
this->y += dy;
    
this->z += dz;
    
}


    public: int32_t getXP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->x;
    
}


    public: int32_t getYP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->y;
    
}


    public: int32_t getZP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->z;
    
}


    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    public: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    public: int64_t getDepth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void setVisible(bool visible){
this->visible= visible;
    
}


    public: bool isVisible(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->visible;
    
}


    public: void paint(Graphics graphics){

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

    CanvasStrings canvasStrings = CanvasStrings::getInstance();;
    
this->logUtil.putF(commonStrings.NOT_IMPLEMENTED, this, canvasStrings.PAINT);
    
}


    protected: void setLayerWidth(int32_t width){

                        if(width < 0)
                        
                                    {
                                    


                            throw IllegalArgumentException();
                    

                                    }
                                
this->width= width;
    
}


    protected: void setLayerHeight(int32_t height){

                        if(height < 0)
                        
                                    {
                                    


                            throw IllegalArgumentException();
                    

                                    }
                                
this->height= height;
    
}


    public: void toStringAppend(StringMaker stringBuffer){
}


};

            

