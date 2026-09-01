
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

    private: static HashMap<any, any> hashMap = HashMap<any, any>();

    private: static const Vector TYPE_VECTOR = Vector();

    public: static InputImageType CAPTURE = InputImageType("Capture", 0);

    public: static InputImageType COMPARISON = InputImageType("Comparison", 1);

    public: static InputImageType MOTION = InputImageType("Motion", 2);

    public: static InputImageType getInstance(std::string imageTypeString);

    public: static Vector getAllAsVector();

    private: std::string name;

    private: int32_t index;

private: InputImageType(std::string name, int32_t index);

    public: std::string toString();

    public: std::string getName();

    public: int32_t getIndex();

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_H
