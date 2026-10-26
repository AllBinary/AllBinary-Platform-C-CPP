
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONDATA_H
        #define ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONDATA_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrientationData
            : public Object
         {

    private: static const OrientationData SINGLETON = OrientationData();

    public: static OrientationData getInstance();

private: OrientationData();

    public: const std::string ORIENTATION_SENSOR_INPUT = "Orientation Sensor Input";

    public: const std::string ORIENTATION_TYPE = "Orientation Type";

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONDATA_H
