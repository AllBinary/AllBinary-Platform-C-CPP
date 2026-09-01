
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/input/AllBinarySensor.h>

      
#include <org/allbinary/input/NoAllBinarySensor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SensorGameUpdateProcessor
            : public Object
         {

    private: AllBinarySensor inputSensor = NoAllBinarySensor::getInstance();

    protected: void setInputSensor(AllBinarySensor inputSensor){
this->inputSensor= inputSensor;
    
}


    public: AllBinarySensor getInputSensor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputSensor;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(Object* anyType){
}


                //@Throws(Exception.constructor)
            
    public: void sendNotifications(Object* anyType){
}


    public: bool isAnySensor(){

                        if(this->inputSensor == NoAllBinarySensor::getInstance())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    protected: void setNoSensors(){
this->setInputSensor(NoAllBinarySensor::getInstance());
    
}


};

            

