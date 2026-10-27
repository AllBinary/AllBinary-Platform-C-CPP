
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <android/os/Parcelable.h>

      
#include <android/os/Parcel.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NullParcelable
            : public Object
        , public Parcelable {

    public: static NullParcelable* NULL_PARCELABLE() { static std::unique_ptr<NullParcelable> value(new NullParcelable()); return value.get(); }

    public: int32_t describeContents(){



                            throw new RuntimeException();
                    
}


    public: void writeToParcel(Parcel* dest, int32_t flags){
}


};

            

