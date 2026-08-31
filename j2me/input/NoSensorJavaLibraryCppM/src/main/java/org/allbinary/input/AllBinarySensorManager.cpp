
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/input/accelerometer/AccelerometerSensorFactory.h>

      
#include <org/allbinary/input/gyro/GyroSensorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinarySensorManager
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static AllBinarySensorManager getInstance(){

                        if(AllBinarySensorManager.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    AllBinarySensorManager.instance= new AllBinarySensorManager();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AllBinarySensorManager.instance as AllBinarySensorManager;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public const ORIENTATION_SENSOR_INPUT: string = "Orientation Sensor Input";

    public const ORIENTATION_TYPE: string = "Orientation Type";

private constructor (){

            super();
        
        try {
            GyroSensorFactory.init();
    
AccelerometerSensorFactory.init();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.CONSTRUCTOR, e);
    
}

}


    public init(){
}


    private: const list: BasicArrayList = new BasicArrayListD();

    public BasicArrayList getSensorNamesList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list;
    
}


    public shutdown(){
}


};

            

