#include <iostream>
#include "storage/pallet.h"

using namespace std;
using namespace storage;

int main() {

    cout << "Beginning test suite... " << endl << endl;

    // Test 1: Test that there is no output when a Pallet is created
    cout << "Test 1: Creating a pallet should produce no output" << endl;
    Pallet p(1, 30);

    cout << endl << endl;

    // A new pallet should not have any items in it
    cout << "Test 2: A new pallet should not have any items in it" << endl;
    p.ListAllItems();

    cout << endl << endl;

    // An empty pallet should not list any items
    cout << "Test 3: An empty pallet should not list any items" << endl;
    p.ListAllItems();

    cout << endl << endl;

    // Adding an item should result it in being shown when ListAllItems is called
    cout << "Test 4: Adding an item should result in it being shown when Pallet::ListAllItems is called." << endl;
    p.AddItem("Rubber duck");
    cout << "Item added!" << endl;
    cout << "Listing items..." << endl;
    p.ListAllItems();

    cout << endl << endl;

    // Adding more items should not affect those already on the pallet
    cout << "Test 5: Adding more items should not affect those already on the pallet." << endl;
    cout << "Current listing: " << endl;
    p.ListAllItems();
    p.AddItem("Gummy bears");
    cout << "Item added. New listing: " << endl;
    p.ListAllItems();

    cout << endl << endl;

    // Removing an item should result in it not being shown on ListAllItems()
    cout << "Test 6: Removing an item should result in that item not being shown when Pallet::ListAllItems is called." << endl;
    cout << "Current listing..." << endl;
    p.ListAllItems();
    p.RemoveTopItem();
    cout << "Top item removed! Listing..." << endl;
    p.ListAllItems();


    cout << endl << endl;

    // Creating a 2nd pallet should not affect the first
    cout << "Test 7: Creating a second pallet should not affect the first." << endl;
    cout << "First pallet listing..." << endl;
    p.ListAllItems();
    Pallet p2(1, 30);
    cout << "Second pallet created! First pallet listing..." << endl;
    p.ListAllItems();

    cout << endl << endl;

    // GetItemAtPosition should return a string containing the item at that position
    cout << "Test 8: GetItemAtPosition should return a string containing the item at that position" << endl;
    cout << "Getting bottom item of the stack." << endl;
    cout << p.getItemAtPosition(0) << endl;

    cout << endl << endl;

    // Listing the contents of the pallet should not affect the contents of the pallet
    cout << "Test 9: Listing the contents of a pallet should not affect the contents of the pallet." << endl;
    cout << "First listing..." << endl;
    p.ListAllItems();
    cout << "Second listing..." << endl;
    p.ListAllItems();

    cout << endl << endl;

    // GetItemAtPosition should not affect the contents of the pallet
    cout << "Test 10: Pallet::GetItemAtPosition should not affect the contents of the pallet" << endl;
    cout << "Initial listing..." << endl;
    p.ListAllItems();
    cout << "Getting first item..." << endl;
    cout << "First item: " << p.getItemAtPosition(0) << endl;
    cout << "Second listing..." << endl;
    p.ListAllItems();

    cout << endl << endl;

    // AddItem should not add an item if doing so would exceed the maximum weight
    cout << "Test 11: Pallet::AddItem should not add an item if doing so would exceed the maximum weight" << endl;
    Pallet p3(3, 1);
    cout << "Added pallet with a maximum weight of 1..." << endl;
    p3.AddItem("Bowling balls");
    cout << "Added 1 item to the pallet... Listing new item..." << endl;
    p3.ListAllItems();
    p3.AddItem("Marbles");
    cout << "Attempted to add another item to the pallet... Listing pallet..." << endl;
    p3.ListAllItems();

    cout << endl << endl;

    // AddItem should return true if the item was added
    cout << "Test 12: Pallet::AddItem should return true if the item was added..." << endl;
    if(p.AddItem("Whiteboard")) {
        cout << "Item added! Pallet::AddItem returned true!" << endl;
    } else {
        cout << "Item not added! Pallet::AddItem returned false" << endl;
    }

    cout << endl << endl;

    // AddItem should return false if the item wasn't added
    cout << "Test 13: Pallet::AddItem should return false if the item was not added..." << endl;
    if(p3.AddItem("Chair") == false) {
        cout << "Pallet::AddItem returned false when trying to add item!" << endl;
    } else {
        cout << "Pallet::AddItem returned true when trying to add item!" << endl;
    }

    cout << endl << endl;

    // Adding an item should increase the current weight by one
    cout << "Test 14: Adding an item should increase the current weight of the pallet by one..." << endl;
    cout << "Current weight of pallet one is: " << p.GetCurrentWeight() << endl;
    p.AddItem("Apple Watch");
    cout << "Item added! New weight of pallet one is: " << p.GetCurrentWeight() << endl;

    cout << endl << endl;

    // GetCurrentWeight should increase the current weight by one...
    cout << "Test 15: GetCurrentWeight should accurately reflect the weight" << endl;
    cout << "All items on the pallet... " << endl;
    p.ListAllItems();
    cout << "Current weight of pallet: " << p.GetCurrentWeight() << endl;
    cout << "Does the number of items and pallet weight match?" << endl;

    cout << endl << endl;

    cout << "Test 16: GetMaxWeight should accurately reflect the maximum weight" << endl;
    cout << "Pallet one was declared with a max weight of 30." << endl;
    cout << "Pallet one is reporting a max weight of " << p.GetMaxWeight() << endl;

    cout << endl << endl;

    cout << "End of test suite." << endl;


    return 0;
}