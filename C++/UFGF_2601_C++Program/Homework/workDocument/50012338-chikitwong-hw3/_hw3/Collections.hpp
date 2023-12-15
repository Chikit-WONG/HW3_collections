#ifndef COLLECTION_H
#define COLLECTION_H

template<typename E>
class Collection {
public:
    /**
     * Virtual destructor for the Collection interface.
     * Ensures derived classes are properly destructed.
     */
    virtual ~Collection() {}

    /**
     * Returns the number of elements in this collection.
     * 
     * @return The number of elements in the collection.
     */
    virtual int size() const = 0;

    /**
     * Checks if the collection is empty.
     * 
     * @return True if the collection is empty, false otherwise.
     */
    virtual bool isEmpty() const = 0;
    
    /**
     * Checks if this collection contains the specified element.
     * 
     * @param element The element to check for.
     * @return True if the element is in the collection, false otherwise.
     */
    virtual bool contains(const E& element) const = 0;
    
    /**
     * Adds an element to the collection.
     * 
     * @param element The element to be added.
     * 
     */
    virtual void add(const E& element) = 0;
    

    /**
     * Removes a single instance of the specified element from this collection.
     * It removes only the first occurrence of the specified element from the collection. 
     * 
     * @param element The element to be removed.
     * @return True if the element was removed, false otherwise.
     */
    virtual bool remove(const E& element) = 0;
    
    /**
     * Clears the collection, removing all elements.
     */
    virtual void clear() = 0;
};


template <typename E>
class List : public Collection<E> {
public:
    /**
     * Retrieves the element at the specified position in this list.
     * Throws std::out_of_range if the index is out of the valid range.
     * 
     * @param index The index of the element to return.
     * @return The element at the specified index.
     */
    virtual E get(int index) const = 0;
    
    
    /**
     * Inherits the add function from Collection, allowing addition of elements.
     */
    using Collection<E>::add;
    
    /**
     * Inserts the specified element at the specified position in this list.
     * 
     * 
     * @param index The index at which the specified element is to be inserted. 
     *              if the index == size(), then add the element to the tail. 
     *              Throws std::out_of_range if the index is out of the valid range. 
     * @param element The element to be inserted.
     * 
     */
    virtual void add(int index, const E& element) = 0;
    
    /**
     * Removes the element at the specified position in this list.
     * Throws std::out_of_range if the index is out of the valid range.
     * 
     * @param index The index of the element to be removed.
     * @return The element that was removed from the list. 
     */
    virtual E removeIndex(int index) = 0;
    
    /**
     * Returns the index of the first occurrence of the specified element in this list.
     * 
     * @param element The element to search for.
     * @return The index of the first occurrence of the element in this list, 
     *         or -1 if this list does not contain the element.
     */
    virtual int indexOf(const E& element) const = 0;
};



#endif // COLLECTION_H

