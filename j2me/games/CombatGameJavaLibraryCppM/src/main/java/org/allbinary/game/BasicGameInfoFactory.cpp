
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGameInfoFactory
            : public Object
         {

    private: static BasicGameInfoFactory* SINGLETON() { static std::unique_ptr<BasicGameInfoFactory> value(new BasicGameInfoFactory()); return value.get(); }

    public: static BasicGameInfoFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGameInfoFactory::SINGLETON();
    
}


    public: int32_t currentReleaseIndex= 0;

    public: int32_t currentDestroyIndex= 0;

    public: int32_t total= 0;

private: BasicGameInfoFactory(){
}


    public: void init(int32_t total){
this->currentReleaseIndex= 0;
    
this->currentDestroyIndex= 0;
    
this->total= total;
    
}


    public: bool isPeaked(){

                        if(this->currentDestroyIndex >= this->total)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: int32_t howManyLeft(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->total -this->currentDestroyIndex;
    
}


};

            

