
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameKeyUtil
            : public Object
         {

    private: static GameKeyUtil* instance() { static std::unique_ptr<GameKeyUtil> value(new GameKeyUtil()); return value.get(); }

    public: static GameKeyUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameKeyUtil::instance();
    
}


    public: bool isDirectionKey(int32_t key){

                        if(key == Canvas::UP || key == Canvas::DOWN || key == Canvas::LEFT || key == Canvas::RIGHT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


};

            

