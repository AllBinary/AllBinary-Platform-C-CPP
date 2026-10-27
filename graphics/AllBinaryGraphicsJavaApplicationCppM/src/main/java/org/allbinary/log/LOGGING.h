
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
        



        #ifndef ORG_ALLBINARY_LOG_LOGGING_H
        #define ORG_ALLBINARY_LOG_LOGGING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListD;

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LOGGING
            : public virtual Object
         {

    private: static BasicArrayList* logging;

    public: static bool contains(LOGGING* logType);

    private: static LOGGING* GRAPHICSPAINT_owner();
    public: static LOGGING* GRAPHICSPAINT;

    private: static LOGGING* GRAPHICSCREATION_owner();
    public: static LOGGING* GRAPHICSCREATION;

    private: static LOGGING* GRAPHICSDELETION_owner();
    public: static LOGGING* GRAPHICSDELETION;

    private: static LOGGING* LOADINGERROR_owner();
    public: static LOGGING* LOADINGERROR;

    private: static LOGGING* MENUEVENT_owner();
    public: static LOGGING* MENUEVENT;

    private: static LOGGING* MOUSEEVENT_owner();
    public: static LOGGING* MOUSEEVENT;

    private: static LOGGING* KEYEVENT_owner();
    public: static LOGGING* KEYEVENT;

    private: static LOGGING* ACTIONEVENT_owner();
    public: static LOGGING* ACTIONEVENT;

    private: static LOGGING* ADJUSTMENTEVENT_owner();
    public: static LOGGING* ADJUSTMENTEVENT;

    private: static LOGGING* COMPONENTEVENT_owner();
    public: static LOGGING* COMPONENTEVENT;

    private: static LOGGING* CONTAINEREVENT_owner();
    public: static LOGGING* CONTAINEREVENT;

    private: static LOGGING* FOCUSEVENT_owner();
    public: static LOGGING* FOCUSEVENT;

    private: static LOGGING* HIERARCHYEVENT_owner();
    public: static LOGGING* HIERARCHYEVENT;

    private: static LOGGING* INPUTEVENT_owner();
    public: static LOGGING* INPUTEVENT;

    private: static LOGGING* INVOCATIONEVENT_owner();
    public: static LOGGING* INVOCATIONEVENT;

    private: static LOGGING* ITEMEVENT_owner();
    public: static LOGGING* ITEMEVENT;

    private: static LOGGING* PAINTEVENT_owner();
    public: static LOGGING* PAINTEVENT;

    private: static LOGGING* TEXTEVENT_owner();
    public: static LOGGING* TEXTEVENT;

    private: static LOGGING* WINDOWEVENT_owner();
    public: static LOGGING* WINDOWEVENT;

    private: std::string name;

private: LOGGING(std::string value);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOG_LOGGING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOG_LOGGING_H_COMPLETE)
        #define ORG_ALLBINARY_LOG_LOGGING_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif


        #endif
    
