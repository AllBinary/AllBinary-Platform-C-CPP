
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
        



            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommonStrings
            : public Object
         {

    private: static CommonStrings instance() { return CommonStrings(); }

    public: static CommonStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonStrings::instance();
    
}


    public: const std::string EMPTY = "Empty";

    public: const std::string CREATE_IMAGE = "createImage";

    public: const std::string PLEASE_WAIT = "Please Wait";

    public: const std::string PLEASE_WAIT_FOR_SERVER = "Please Wait Getting Data From Server...";

    public: const std::string PERIODS = "...";

    public: const std::string LOADING = "Loading...";

    public: const std::string CONSTRUCTOR = "Constructor";

    public: const std::string START = "Start";

    public: const std::string END = "End";

    public: const std::string EXCEPTION = "Exception";

    public: const std::string EXCEPTION_LABEL = "Exception: ";

    public: const std::string CLEANUP = "cleanup";

    public: const std::string INIT = "init";

    public: const std::string CLOSE = "close";

    public: const std::string UP = "up";

    public: const std::string DOWN = "down";

    public: const std::string LEFT = "left";

    public: const std::string RIGHT = "right";

    public: const std::vector<std::string> DIRECTION_NAME = 
                                                        {
                                                            this->DOWN,this->LEFT,this->RIGHT,this->UP
                                                        };

    public: const std::string CREATE = "Create";

    public: const std::string REMOVE = "Remove";

    public: const std::string UPDATE = "Update";

    public: const std::string DELETE = "Delete";

    public: const std::string delete_ = "delete";

    public: const std::string LOAD = "load";

    public: const std::string SAVE = "save";

    public: const std::string ADD = "Add";

    public: const std::string DROP = "Drop";

    public: const std::string INSERT = "Insert";

    public: const std::string VISIT = "visit";

    public: const std::string START_METHOD_NAME = this->START;

    public: const std::string END_METHOD_NAME = "end";

    public: const std::string GET = "get";

    public: const std::string PROCESS = "process";

    public: const std::string GET_INSTANCE = "getInstance";

    public: const std::string GET_LIST = "getList";

    public: const std::string RUN = "run";

    public: const std::string START_RUNNABLE = "Start Runnable";

    public: const std::string RUNNING = "Running";

    public: const std::string END_RUNNABLE = "End Runnable";

    public: const std::string DISABLE = "disable";

    public: const std::string ENABLE = "enable";

    public: const std::string SUCCESS = "Command Success";

    public: const std::string FAILURE = "Command Failed";

    public: const std::string NOT_IMPLEMENTED = "Not Implemented";

    public: const std::string UNKNOWN = "Unknown";

    public: const std::string ON_EVENT = "onEvent";

    public: const std::string IS_VALID = "isValid";

    public: const std::string TOSTRING = "toString";

    public: const std::string ADD_LISTENER = "addListener";

    public: const std::string REMOVE_LISTENER = "removeListener";

};

            

