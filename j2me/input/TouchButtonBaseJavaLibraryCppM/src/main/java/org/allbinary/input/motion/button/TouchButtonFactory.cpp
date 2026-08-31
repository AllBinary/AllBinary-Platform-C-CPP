
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TouchButtonFactory
            : public Object
         {
        

    private: static const SINGLETON: TouchButtonFactory = new TouchButtonFactory();

    public static TouchButtonFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TouchButtonFactory.SINGLETON;
    
}


    private: LIST: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    private: list: BasicArrayList = this.LIST;

    private: savedList: BasicArrayList = this.LIST;

private constructor (){

            super();
        }


    public defaultList(){
this.list= this.LIST;
    
this.toggle(false, this.LIST);
    
}


    private: saved: bool = false;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public toggle(bool save, BasicArrayList list){

                        if(list != BasicArrayListUtil.getInstance()!.getImmutableInstance())
                        
                                    {
                                    this.savedList= list;
    

                        if(!this.saved)
                        
                                    {
                                    this.list= this.savedList;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        if(save)
                        
                                    {
                                    
                        if(!this.saved)
                        
                                    {
                                    this.saved= true;
    
this.savedList= this.list;
    
this.list= this.LIST;
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            this.list= this.savedList;
    
this.saved= false;
    

                        }
                            

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public setList(BasicArrayList list){

                        if(list == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Null List");
                    

                                    }
                                
this.list= list;
    
}


    BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.list;
    
}


};

            

