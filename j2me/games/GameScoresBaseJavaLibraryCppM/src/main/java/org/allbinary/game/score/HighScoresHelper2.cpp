
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
        
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresHelperBase.h"
#include "NullHighScoresSingletonFactory.h"
#include "HighScores.h"

class HighScoresHelper2: public HighScoresHelperBase {

    private: const CircularIndexUtil circularIndexUtil = CircularIndexUtil::createInstanceAt(0, 0);

    private: HighScores selectedHighScores = NullHighScoresSingletonFactory::getInstance();

    public: void setSelectedHighScores(HighScores selectedHighScores){
this->selectedHighScores= selectedHighScores;
    
}


    public: HighScores getSelectedHighScores(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedHighScores;
    
}


    public: void setHighScoresArray(std::vector<HighScores> highScoresArrayP){
super.setHighScoresArray(highScoresArrayP);
    
this->circularIndexUtil.setSize(this->highScoresArrayP.size());
    
this->selectHighScores();
    
}


    public: void selectHighScores(){

                        if(this->highScoresArrayP.size() == 0)
                        
                                    {
                                    this->setSelectedHighScores(NullHighScoresSingletonFactory::getInstance());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this->circularIndexUtil.next();
    

    HighScores highScores = this->highScoresArrayP[this->circularIndexUtil.getIndex()];;
    

    int32_t index = 0;;
    

        while(highScores.getTotal() < 1 && index < this->highScoresArrayP.size())
        {
highScores= this->highScoresArrayP[this->circularIndexUtil.next()]!;
    
index++;
    
}

this->setSelectedHighScores(highScores);
    
}


};

            

