
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
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinarySensorListener.h"

class AllBinarySensor
            : public Object
        : public AllBinarySensorListener {

    public: static const AllBinarySensor NULL_ALLBINARY_SENSOR = AllBinarySensor();

    private: static int32_t max = 100;

    public: static void setMax(int32_t max){
AllBinarySensor::max= max;
    
}


    public: static int32_t getMax(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinarySensor::max;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

protected: AllBinarySensor(){
}


    public: void init(){
}


                //@Throws(Exception.constructor)
            
    public: void update(){
}


    public: int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinarySensor::getMax();;
    
}


    public: void shutdown(){
this->logUtil.putF(this->commonStrings.START, this, "shutdown");
    
}


    public: void onSensorChange(){
ForcedLogUtil::log(this->commonStrings.NOT_IMPLEMENTED, this);
    
}


};

            

