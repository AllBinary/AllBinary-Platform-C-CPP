
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
        



        #ifndef ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDER_H
        #define ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class NullParcelable;
class Command;
class PendingIntent;
class Context;
class Parcelable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NotificationBuilder
            : public virtual Object
         {

    private: static NotificationBuilder* NULL_NOTIFICATION_BUILDER_owner();
    public: static NotificationBuilder* NULL_NOTIFICATION_BUILDER;


            
    public: NotificationBuilder();
        
    public: Parcelable* build(Context* context, Command* command, std::string message, int32_t integer, PendingIntent* pendingIntent);

};

            


        #endif //ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDER_H_COMPLETE)
        #define ORG_ALLBINARY_CONTENT_NOTIFICATIONBUILDER_H_COMPLETE
        #if __has_include(<org/allbinary/android/NullParcelable.h>)
#include <org/allbinary/android/NullParcelable.h>
#endif
#if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<android/app/PendingIntent.h>)
#include <android/app/PendingIntent.h>
#endif
#if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<android/os/Parcelable.h>)
#include <android/os/Parcelable.h>
#endif

        #endif
    
