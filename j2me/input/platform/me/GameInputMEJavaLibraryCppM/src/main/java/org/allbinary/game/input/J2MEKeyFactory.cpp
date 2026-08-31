
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
        



            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameKeyFactory.h"
#include "GameKey.h"
#include "InputFactory.h"
#include "Input.h"

class J2MEKeyFactory
            : public Object
         {
        

    private: static const instance: J2MEKeyFactory = new J2MEKeyFactory();

    public static J2MEKeyFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2MEKeyFactory.instance;
    
}


private constructor (){

            super();
        }


    private: const gameKeyFactory: GameKeyFactory = GameKeyFactory.getInstance()!;

    public init(){

    gameKeyArray: std::vector<GameKey> = 
                                                        [
                                                            this.gameKeyFactory!.DOWN,this.gameKeyFactory!.FIRE,this.gameKeyFactory!.GAME_A,this.gameKeyFactory!.GAME_B,this.gameKeyFactory!.GAME_C,this.gameKeyFactory!.GAME_D,this.gameKeyFactory!.KEY_NUM0,this.gameKeyFactory!.KEY_NUM1,this.gameKeyFactory!.KEY_NUM2,this.gameKeyFactory!.KEY_NUM3,this.gameKeyFactory!.KEY_NUM4,this.gameKeyFactory!.KEY_NUM5,this.gameKeyFactory!.KEY_NUM6,this.gameKeyFactory!.KEY_NUM7,this.gameKeyFactory!.KEY_NUM8,this.gameKeyFactory!.KEY_NUM9,this.gameKeyFactory!.KEY_POUND,this.gameKeyFactory!.KEY_STAR,this.gameKeyFactory!.LEFT,this.gameKeyFactory!.LEVEL_DOWN,this.gameKeyFactory!.LEVEL_UP,this.gameKeyFactory!.NONE,this.gameKeyFactory!.RIGHT,this.gameKeyFactory!.UP
                                                        ];;
    

    inputFactory: InputFactory = InputFactory.getInstance()!;;
    




                        for (
    index: int32_t = gameKeyArray!.length
                ;--index >= 0; )
        {
inputFactory!.add(gameKeyArray[index]!.getId(), gameKeyArray[index]!);
    
}

}


    public bool isSubmission(Input input){

                        if(input == this.gameKeyFactory!.FIRE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isDelete(Input input){

                        if(input == this.gameKeyFactory!.GAME_D)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isBackSpace(Input input){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isUp(Input input){

                        if(input == this.gameKeyFactory!.UP)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isDown(Input input){

                        if(input == this.gameKeyFactory!.DOWN)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isLeft(Input input){

                        if(input == this.gameKeyFactory!.LEFT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isRight(Input input){

                        if(input == this.gameKeyFactory!.RIGHT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isEnter(Input input){

                        if(input == this.gameKeyFactory!.FIRE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

