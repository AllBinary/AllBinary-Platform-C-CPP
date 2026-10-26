
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "java/lang/Object.h"
        
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlayerStateUtil
            : public Object
         {

    private: static PlayerStateUtil instance() { return PlayerStateUtil(); }

    public: static PlayerStateUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlayerStateUtil::instance();
    
}


    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: const std::string UNREALIZED = "UNREALIZED";

    public: const std::string REALIZED = "REALIZED";

    public: const std::string PREFETCHED = "PREFETCHED";

    public: const std::string STARTED = "STARTED";

    public: const std::string CLOSED = "CLOSED";

    public: std::string convert(int32_t state){

                        if(state == Player::UNREALIZED)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->UNREALIZED;
    

                                    }
                                
                             else 
                        if(state == Player::REALIZED)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->REALIZED;
    

                                    }
                                
                             else 
                        if(state == Player::PREFETCHED)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->PREFETCHED;
    

                                    }
                                
                             else 
                        if(state == Player::STARTED)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->STARTED;
    

                                    }
                                
                             else 
                        if(state == Player::CLOSED)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->CLOSED;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commonStrings.UNKNOWN;
    
}


};

            

