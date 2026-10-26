
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

            #include <hilog/log.h>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <android/os/Parcelable.h>

      
#include <android/os/Parcel.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NullParcelable
            : public Object
        : public Parcelable {

    public: static const NullParcelable NULL_PARCELABLE = NullParcelable();

    public: int32_t describeContents();

    public: void writeToParcel(Parcel dest, int32_t flags);

};

            


        #endif //ORG_ALLBINARY_ANDROID_NULLPARCELABLE_H
