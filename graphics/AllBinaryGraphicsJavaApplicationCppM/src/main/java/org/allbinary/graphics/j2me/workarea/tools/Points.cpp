
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PointsInterface.h"

class Points
            : public Object
        : public PointsInterface {

    private: BasicArrayList pointVector;

public: Points(){
this->pointVector= BasicArrayListD();
    
}


    public: void init(){
this->pointVector.clear();
    
}


    public: BasicArrayList getPoints(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pointVector;
    
}


    public: void addPoints(BasicArrayList vector){
this->pointVector.addAll2(vector);
    
}


    public: bool isValid(){

                        if(this->pointVector.size() > 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pointVector.size();;
    
}


};

            

