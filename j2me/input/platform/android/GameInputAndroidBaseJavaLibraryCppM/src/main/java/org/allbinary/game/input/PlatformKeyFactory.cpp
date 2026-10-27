
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/ActivityFractureControllerUtilFactory.h"
#include "org/allbinary/game/input/AndroidKeyFactory.h"
#include "org/allbinary/game/input/AndroidGameKey.h"
#include "org/allbinary/game/input/Input.h"

class PlatformKeyFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static PlatformKeyFactory* getInstance(){

                        if(PlatformKeyFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    PlatformKeyFactory::instance= new PlatformKeyFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<PlatformKeyFactory*>(PlatformKeyFactory::instance);
    
}


    private: AndroidKeyFactory* androidKeyFactory = ActivityFractureControllerUtilFactory::getInstance();

    public: std::string getString(int32_t keyCode){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AndroidGameKey::getString(keyCode);;
    
}


    public: bool isSubmission(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->androidKeyFactory->isSubmission(input);;
    
}


    public: bool isDelete(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->androidKeyFactory->isDelete(input);;
    
}


    public: bool isBackSpace(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->androidKeyFactory->isBackSpace(input);;
    
}


    public: bool isLeft(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->androidKeyFactory->isLeft(input);;
    
}


    public: bool isRight(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->androidKeyFactory->isRight(input);;
    
}


    public: bool isUp(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->androidKeyFactory->isUp(input);;
    
}


    public: bool isDown(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->androidKeyFactory->isDown(input);;
    
}


    public: bool isEnter(Input* input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->androidKeyFactory->isEnter(input);;
    
}


};

            

