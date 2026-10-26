
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TouchButtonFactory
            : public Object
         {

    private: static const TouchButtonFactory SINGLETON = TouchButtonFactory();

    public: static TouchButtonFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchButtonFactory::SINGLETON;
    
}


    private: BasicArrayList LIST = BasicArrayListUtil::getInstance().getImmutableInstance();

    private: BasicArrayList list = this->LIST;

    private: BasicArrayList savedList = this->LIST;

private: TouchButtonFactory(){
}


    public: void defaultList(){
this->list= this->LIST;
    
this->toggle(false, this->LIST);
    
}


    private: bool saved = false;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void toggle(bool save, BasicArrayList list){

                        if(list != BasicArrayListUtil::getInstance().getImmutableInstance())
                        
                                    {
                                    this->savedList= list;
    

                        if(!this->saved)
                        
                                    {
                                    this->list= this->savedList;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(save)
                        
                                    {
                                    
                        if(!this->saved)
                        
                                    {
                                    this->saved= true;
    
this->savedList= this->list;
    
this->list= this->LIST;
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            this->list= this->savedList;
    
this->saved= false;
    

                        }
                            

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void setList(BasicArrayList list){

                        if(list == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Null List");
                    

                                    }
                                
this->list= list;
    
}


    protected: BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


};

            

