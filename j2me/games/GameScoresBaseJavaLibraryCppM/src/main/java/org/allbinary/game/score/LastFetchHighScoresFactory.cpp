
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
        



            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoHighScoresFactory.h"
#include "HighScores.h"

class LastFetchHighScoresFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static LastFetchHighScoresFactory getInstance(){

                        if(LastFetchHighScoresFactory.instance == NullUtil.getInstance()!.NULL_OBJECT)
                        
                                    {
                                    LastFetchHighScoresFactory.instance= new LastFetchHighScoresFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LastFetchHighScoresFactory.instance as LastFetchHighScoresFactory;
    
}


    public highScoresArray: std::vector<HighScores> = NoHighScoresFactory.getInstance()!.NO_HIGH_SCORES;

};

            

