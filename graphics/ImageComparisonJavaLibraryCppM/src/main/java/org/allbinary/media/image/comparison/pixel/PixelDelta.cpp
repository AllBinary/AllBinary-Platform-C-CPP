
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/media/image/comparison/color/ColorDelta.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PixelDelta
            : public Object
        : public CacheableInterface {

    public: static Object* getKey(GPoint point, ColorDelta colorDelta){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().appendint(TsUtil::getInstance().hashCode(point)).append(CommonSeps::getInstance().UNDERSCORE).append(colorDelta.getKey().toString()).toString();;
    
}


    private: GPoint point;

    private: ColorDelta colorDelta;

    private: Object* key;

public: PixelDelta(GPoint point, ColorDelta colorDelta){
this->setPoint(point);
    
this->setColorDelta(colorDelta);
    
this->key= PixelDelta::getKey(this->getPoint(), this->getColorDelta());
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->key;
    
}


    public: GPoint getPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->point;
    
}


    public: void setPoint(GPoint point){
this->point= point;
    
}


    public: ColorDelta getColorDelta(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->colorDelta;
    
}


    public: void setColorDelta(ColorDelta colorDelta){
this->colorDelta= colorDelta;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append("PixelDelta: Point: ").append(this->point.toString()).append(CommonSeps::getInstance().SPACE).append(this->colorDelta.toString()).toString();;
    
}


};

            

