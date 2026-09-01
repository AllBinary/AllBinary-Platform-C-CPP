
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

    public: static InputImageType getInstance(std::string imageTypeString){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputImageType::hashMap.get(imageTypeString) as InputImageType;
    
}


    public: static Vector getAllAsVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputImageType::TYPE_VECTOR;
    
}


    private: std::string name;

    private: int32_t index;

private: InputImageType(std::string name, int32_t index){
this->name= name;
    
this->index= index;
    
InputImageType::TYPE_VECTOR.add(this);
    
InputImageType::hashMap.put(this->getName(), this);
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "ImageType: " +this->getName();
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: int32_t getIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->index;
    
}


};

            

