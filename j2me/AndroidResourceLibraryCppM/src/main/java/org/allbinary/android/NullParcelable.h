
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
        



        #ifndef ORG_ALLBINARY_ANDROID_NULLPARCELABLE_H
        #define ORG_ALLBINARY_ANDROID_NULLPARCELABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <android/os/Parcelable.h>
class Parcel;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullParcelable
            : public virtual Object
        , public Parcelable {

    private: static NullParcelable* NULL_PARCELABLE_owner();
    public: static NullParcelable* NULL_PARCELABLE;


            
    public: NullParcelable();
        
    public: int32_t describeContents();

    public: void writeToParcel(Parcel* dest, int32_t flags);

};

            


        #endif //ORG_ALLBINARY_ANDROID_NULLPARCELABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_NULLPARCELABLE_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_NULLPARCELABLE_H_COMPLETE
        #if __has_include(<android/os/Parcelable.h>)
#include <android/os/Parcelable.h>
#endif
#if __has_include(<android/os/Parcel.h>)
#include <android/os/Parcel.h>
#endif

        #endif
    
