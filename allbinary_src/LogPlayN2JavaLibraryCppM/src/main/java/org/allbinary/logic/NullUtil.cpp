
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Class.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class NullUtil
            : public Object
         {
        

    private: static const instance: NullUtil = new NullUtil();

    /*actual*/ public static NullUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.instance;
    
}


    /*actual*/ public const NULL_OBJECT: any = {};

    /*actual*/ public const NULL_CLASS: Function = this.NULL_OBJECT.constructor!;

    /*actual*/ public const NULL_OBJECT_ARRAY: std::vector<any> = [];

    /*actual*/ public const NULL_BYTE_ARRAY: std::vector<int8_t> = [];

    /*actual*/ public const NULL_CHAR_ARRAY: std::vector<char> = 
                                                        
                                                        new Array(0)
                                                    ;

    /*actual*/ public const NULL_SHORT_ARRAY_ARRAY: std::vector<std::vector<int16_t>> = new Array(0).fill(null).map(() => new Array(0).fill(0));

    /*actual*/ public const NULL_INT_ARRAY: std::vector<int32_t> = [];

    /*actual*/ public const NULL_INT_ARRAY_ARRAY: std::vector<std::vector<int32_t>> = new Array(0).fill(null).map(() => new Array(0).fill(0));

    /*actual*/ public const NULL_INT_ARRAY_ARRAY_ARRAY: std::vector<std::vector<std::vector<int32_t>>> = Array.from({ length: 0 }, () => Array.from({ length: 0 }, () => new Array(0).fill(0)));

    /*actual*/ public const NULL_FLOAT_ARRAY: std::vector<float> = [];

    /*actual*/ public const EMPTY_VECTOR: Vector<any> = new Vector<any>();

    /*actual*/ public const NULL_TABLE: Hashtable<any, any> = new Hashtable<any, any>();

    /*actual*/ public const NULL_MAP: HashMap<any, any> = new HashMap<any, any>();

};

            

