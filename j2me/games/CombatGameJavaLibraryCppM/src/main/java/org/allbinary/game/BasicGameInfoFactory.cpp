
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGameInfoFactory
            : public Object
         {
        

    private: static const SINGLETON: BasicGameInfoFactory = new BasicGameInfoFactory();

    public static BasicGameInfoFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGameInfoFactory.SINGLETON;
    
}


    public currentReleaseIndex: int32_t= 0;

    public currentDestroyIndex: int32_t= 0;

    public total: int32_t= 0;

private constructor (){

            super();
        }


    public init(int32_t total){
this.currentReleaseIndex= 0;
    
this.currentDestroyIndex= 0;
    
this.total= total;
    
}


    public bool isPeaked(){

                        if(this.currentDestroyIndex >= this.total)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public int32_t howManyLeft(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.total -this.currentDestroyIndex;
    
}


};

            

