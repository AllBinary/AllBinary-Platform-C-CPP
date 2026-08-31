
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CommonStrings
            : public Object
         {
        

    private: static const instance: CommonStrings = new CommonStrings();

    public static CommonStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommonStrings.instance;
    
}


    public const EMPTY: string = "Empty";

    public const CREATE_IMAGE: string = "createImage";

    public const PLEASE_WAIT: string = "Please Wait";

    public const PLEASE_WAIT_FOR_SERVER: string = "Please Wait Getting Data From Server...";

    public const PERIODS: string = "...";

    public const LOADING: string = "Loading...";

    public const CONSTRUCTOR: string = "Constructor";

    public const START: string = "Start";

    public const END: string = "End";

    public const EXCEPTION: string = "Exception";

    public const EXCEPTION_LABEL: string = "Exception: ";

    public const CLEANUP: string = "cleanup";

    public const INIT: string = "init";

    public const CLOSE: string = "close";

    public const UP: string = "up";

    public const DOWN: string = "down";

    public const LEFT: string = "left";

    public const RIGHT: string = "right";

    public const DIRECTION_NAME: std::vector<string> = 
                                                        [
                                                            this.DOWN,this.LEFT,this.RIGHT,this.UP
                                                        ];

    public const CREATE: string = "Create";

    public const REMOVE: string = "Remove";

    public const UPDATE: string = "Update";

    public const DELETE: string = "Delete";

    public const delete: string = "delete";

    public const LOAD: string = "load";

    public const SAVE: string = "save";

    public const ADD: string = "Add";

    public const DROP: string = "Drop";

    public const INSERT: string = "Insert";

    public const VISIT: string = "visit";

    public const START_METHOD_NAME: string = this.START;

    public const END_METHOD_NAME: string = "end";

    public const GET: string = "get";

    public const PROCESS: string = "process";

    public const GET_INSTANCE: string = "getInstance";

    public const GET_LIST: string = "getList";

    public const RUN: string = "run";

    public const START_RUNNABLE: string = "Start Runnable";

    public const RUNNING: string = "Running";

    public const END_RUNNABLE: string = "End Runnable";

    public const DISABLE: string = "disable";

    public const ENABLE: string = "enable";

    public const SUCCESS: string = "Command Success";

    public const FAILURE: string = "Command Failed";

    public const NOT_IMPLEMENTED: string = "Not Implemented";

    public const UNKNOWN: string = "Unknown";

    public const ON_EVENT: string = "onEvent";

    public const IS_VALID: string = "isValid";

    public const TOSTRING: string = "toString";

    public const ADD_LISTENER: string = "addListener";

    public const REMOVE_LISTENER: string = "removeListener";

};

            

