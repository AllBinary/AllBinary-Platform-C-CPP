
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeologicalResource
            : public Object
         {

    private: int32_t total= 0;

    private: int32_t initTotal;

public: GeologicalResource(int32_t initTotal){
this->initTotal= initTotal;
    
this->init();
    
}


    public: void init(){
this->setTotal(this->initTotal);
    
}


    public: void add(int32_t value){

    int32_t max = Integer::MAX_VALUE;;
    

                        if(this->getTotal() +value > max)
                        
                                    {
                                    this->setTotal(max);
    

                                    }
                                
                        else {
                            this->setTotal(this->getTotal() +value);
    

                        }
                            
}


    public: void remove(int32_t value){

                        if(this->getTotal() -value < 0)
                        
                                    {
                                    this->setTotal(0);
    

                                    }
                                
                        else {
                            this->setTotal(this->getTotal() -value);
    

                        }
                            
}


    public: int32_t getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->total;
    
}


    protected: void setTotal(int32_t total){
this->total= total;
    
}


};

            

