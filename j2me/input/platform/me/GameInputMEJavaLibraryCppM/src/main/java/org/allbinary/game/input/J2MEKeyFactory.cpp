
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_J2MEKEYFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_J2MEKEYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/J2MEKeyFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/Input.h"

auto J2MEKeyFactory::instance_owner() -> J2MEKeyFactory* { static std::unique_ptr<J2MEKeyFactory> value(new J2MEKeyFactory()); return value.get(); }
J2MEKeyFactory* J2MEKeyFactory::instance = J2MEKeyFactory::instance_owner();

    auto J2MEKeyFactory::getInstance() -> J2MEKeyFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory::instance;
    
}


J2MEKeyFactory::J2MEKeyFactory() : gameKeyFactory(GameKeyFactory::getInstance()){
}


    auto J2MEKeyFactory::init() -> void{

    std::vector<GameKey*> gameKeyArray = 
                                                        {
                                                            this->gameKeyFactory->DOWN,this->gameKeyFactory->FIRE,this->gameKeyFactory->GAME_A,this->gameKeyFactory->GAME_B,this->gameKeyFactory->GAME_C,this->gameKeyFactory->GAME_D,this->gameKeyFactory->KEY_NUM0,this->gameKeyFactory->KEY_NUM1,this->gameKeyFactory->KEY_NUM2,this->gameKeyFactory->KEY_NUM3,this->gameKeyFactory->KEY_NUM4,this->gameKeyFactory->KEY_NUM5,this->gameKeyFactory->KEY_NUM6,this->gameKeyFactory->KEY_NUM7,this->gameKeyFactory->KEY_NUM8,this->gameKeyFactory->KEY_NUM9,this->gameKeyFactory->KEY_POUND,this->gameKeyFactory->KEY_STAR,this->gameKeyFactory->LEFT,this->gameKeyFactory->LEVEL_DOWN,this->gameKeyFactory->LEVEL_UP,this->gameKeyFactory->NONE,this->gameKeyFactory->RIGHT,this->gameKeyFactory->UP
                                                        };;
    

    InputFactory* inputFactory = InputFactory::getInstance();;
    




                        for (
    int32_t index = gameKeyArray.size();--index >= 0; )
        {
inputFactory->add(gameKeyArray[index]->getId(), gameKeyArray[index]);
    
}

}


    auto J2MEKeyFactory::isSubmission(Input* input) -> bool{

                        if(input == this->gameKeyFactory->FIRE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto J2MEKeyFactory::isDelete(Input* input) -> bool{

                        if(input == this->gameKeyFactory->GAME_D)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto J2MEKeyFactory::isBackSpace(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto J2MEKeyFactory::isUp(Input* input) -> bool{

                        if(input == this->gameKeyFactory->UP)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto J2MEKeyFactory::isDown(Input* input) -> bool{

                        if(input == this->gameKeyFactory->DOWN)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto J2MEKeyFactory::isLeft(Input* input) -> bool{

                        if(input == this->gameKeyFactory->LEFT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto J2MEKeyFactory::isRight(Input* input) -> bool{

                        if(input == this->gameKeyFactory->RIGHT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto J2MEKeyFactory::isEnter(Input* input) -> bool{

                        if(input == this->gameKeyFactory->FIRE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_J2MEKEYFACTORY_CPP
