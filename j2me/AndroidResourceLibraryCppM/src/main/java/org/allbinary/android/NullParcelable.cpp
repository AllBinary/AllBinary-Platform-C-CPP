
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
        



        #ifndef ORG_ALLBINARY_ANDROID_NULLPARCELABLE_CPP
        #define ORG_ALLBINARY_ANDROID_NULLPARCELABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/NullParcelable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <android/os/Parcelable.h>

      
#include <android/os/Parcel.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NullParcelable::NullParcelable() {
        }
        auto NullParcelable::NULL_PARCELABLE_owner() -> NullParcelable* { static std::unique_ptr<NullParcelable> value(new NullParcelable()); return value.get(); }
NullParcelable* NullParcelable::NULL_PARCELABLE = NullParcelable::NULL_PARCELABLE_owner();

    auto NullParcelable::describeContents() -> int32_t{



                            throw RuntimeException();
                    
}


    auto NullParcelable::writeToParcel(Parcel* dest, int32_t flags) -> void{
}




        #endif //ORG_ALLBINARY_ANDROID_NULLPARCELABLE_CPP
