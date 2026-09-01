
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
        
            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Input.h"

class InputFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static InputFactory getInstance(){

                        if(InputFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    InputFactory::instance= InputFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputFactory::instance() as InputFactory;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: const std::string KEY_CODE_LABEL = "KeyCode: ";

    public: const std::string DEVICE_ID_LABEL = "DeviceId: ";

    public: const int32_t MAX = SmallIntegerSingletonFactory::getInstance().getMin();

    protected: const std::vector<Input> inputIntegerArray = new Array(this->MAX);

    public: const Input NO_INPUT = Input(0, this->commonStrings.UNKNOWN);

private: InputFactory(){

    int32_t size = this->inputIntegerArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->inputIntegerArray[index]= this->NO_INPUT;
    
}

}


    public: void add(int32_t id, Input input){
this->inputIntegerArray[id]= input;
    
}


    public: Input getInstanceById(int32_t id){

                        if(id < 0)
                        
                                    {
                                    id=  -id;
    

                                    }
                                

                        if(id > this->inputIntegerArray.size())
                        
                                    {
                                    this->logUtil.putF(StringMaker().append("Warning id: ").appendint(id).toString(), this, this->commonStrings.GET_INSTANCE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NO_INPUT;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputIntegerArray[id]!;
    
}


};

            

