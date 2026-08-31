
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_H
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_H

            #include "../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputImageType
            : public Object
         {
        

    private: static hashMap: HashMap<any, any> = new HashMap<any, any>();

    private: static const TYPE_VECTOR: Vector = new Vector();

    public static CAPTURE: InputImageType = new InputImageType("Capture", 0);

    public static COMPARISON: InputImageType = new InputImageType("Comparison", 1);

    public static MOTION: InputImageType = new InputImageType("Motion", 2);

    public static InputImageType getInstance(string imageTypeString);

    public static Vector getAllAsVector();

    private: const name: string;

    private: const index: int32_t;

private constructor (string name, int32_t index);

    public string toString();

    public string getName();

    public int32_t getIndex();

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_H
