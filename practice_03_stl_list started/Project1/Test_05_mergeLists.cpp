#include "Testing.h"

void testMergeLists()
{
	//cout << "TEST: mergeLists\n\n";
	//{	
	//	vector<vector<int>> vMerge{
	//		{},{ 100 },
	//		{ 30 },{},
	//		{ 40 },{ 300, 200, 500 },
	//		{ 40, 10, 60 },{ 500 },
	//		{ 60, 40, 20, 70 },{ 300, 500, 400, 900, 200 },
	//		{ 30, 50, 40, 90, 20, 10 },{ 600, 400, 200, 700 },
	//	};

	//	for (size_t i = 0; i < vMerge.size(); i += 2)
	//	{
	//		AnyList list1, list2;

	//		// create vectors
	//		vector<int> v1 = vMerge[i];
	//		vector<int> v2 = vMerge[i + 1];

	//		// populate lists
	//		for (size_t j = 0; j < vMerge[i].size(); ++j)
	//			list1.insertBack(vMerge[i][j]);
	//		for (size_t j = 0; j < vMerge[i + 1].size(); ++j)
	//			list2.insertBack(vMerge[i + 1][j]);

	//		// output lists
	//		cout << "   List 1 is: ";
	//		ostream_iterator<int> screen(cout, " ");
	//		copy(v1.cbegin(), v1.cend(), screen);
	//		if (v1.empty()) cout << "(empty)";
	//		cout << "\n   List 2 is: ";
	//		copy(v2.cbegin(), v2.cend(), screen);
	//		if (v2.empty()) cout << "(empty)";

	//		// keep a copy of v2 before sorting
	//		vector<int> v2Copy = v2;

	//		// sort vectors before merging
	//		sort(v1.begin(), v1.end());
	//		sort(v2.begin(), v2.end());

	//		// merge vectors 
	//		vector<int> vMergeResult(v1.size() + v2.size());
	//		merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vMergeResult.begin());

	//		// merge lists 
	//		list1.mergeLists(list2);
	//		cout << "\nAfter merging...";
	//		cout << "\n   List 1 is: ";
	//		copy(vMergeResult.cbegin(), vMergeResult.cend(), screen);
	//		cout << "\n Your output: ";			
	//		cout << list1;
	//		cout << "\nList 2 should stay the same: ";
	//		copy(v2Copy.begin(), v2Copy.end(), screen);
	//		cout << "\n                Your output: ";
	//		cout << list2;
	//		cout << endl << endl;
	//	}
	//}
	//cout << "\n--------------------------------------\n";
}