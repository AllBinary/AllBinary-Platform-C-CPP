
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Sound.h"
#include "NoSound.h"

class PlayerQueue
            : public Object
         {

    private: static const std::string TOTAL = "Sounds In Queue: ";

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const BasicArrayList list = BasicArrayListD();

    private: int32_t max;

: PlayerQueue(int32_t max){
this->max= max;
    
}


    public: void add(Sound sound){

        try {
            
                        if(!this->list.contains(sound))
                        
                                    {
                                    this->list.add(sound);
    

                                    }
                                

                //: 
} catch(e) 
            {
PreLogUtil::put(this->commonStrings.EXCEPTION, this, this->commonStrings.ADD);
    
}

}


    public: bool process(){

    Sound sound = NoSound::getInstance();;
    

        try {
            
    bool played = false;;
    

                        if(this->list.size() > 0)
                        
                                    {
                                    sound= this->list.removeAt(0);
    

                        if(sound != 
                                    nullptr
                                )
                        
                                    {
                                    sound.getPlayerP().start();
    

                                    }
                                

        while(this->list.size() > this->max)
        {
this->list.removeAt(0);
    
}

played= true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return played;
    

                //: 
} catch(e) 
            {

    std::string resource = StringUtil::getInstance().EMPTY_STRING;;
    

                        if(sound != 
                                    nullptr
                                )
                        
                                    {
                                    resource= sound.getResource();
    

                                    }
                                
PreLogUtil::put(StringMaker().append(this->commonStrings.EXCEPTION_LABEL).append(resource).toString(), this, this->commonStrings.PROCESS);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public: void clear(){
this->list.clear();
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append(PlayerQueue::TOTAL).appendint(this->list.size()).toString();;
    
}


};

            

