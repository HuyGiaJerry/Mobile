import { Alert, FlatList, SectionList, ScrollView, StyleSheet, Text, TouchableOpacity, View } from 'react-native';
import React from 'react';

const DataSec = [
  {
    title: 'Main dishes',
    data: ['Pizza', 'Burger', 'Risotto']
  },
  {
    title: 'Sides',
    data: ['French Fries', 'Onion Rings', 'Fries Shrimps']
  },
  {
    title: 'Desserts',
    data: ['Cheese Cake', 'Ice Cream']
  }
];

const products = [
  { id: 1, name: "Product A", price: 10.00},
  { id: 2, name: "Product B", price: 15.00},
  { id: 3, name: "Product C", price: 20.00},
];

export default function App() {
  return (
    <ScrollView style={styles.container}>
      <Text style={styles.header}>FlatList</Text>
      <FlatList
        data={products}
        renderItem={({item}) => (
          <View>
            <Text style={styles.itemFlat}>{item.id} -- {item.name} -- {item.price}</Text>
          </View>
        )}
        keyExtractor={(item, index) => index.toString()}
      />

      <Text style={styles.header}>SectionList</Text>
      <SectionList
        sections={DataSec}
        keyExtractor={(item, index) => index + item}
        renderItem={({ item }) => (
          <TouchableOpacity
            style={styles.item}
            onPress={() => Alert.alert('Select:', item)}
          >
            <Text style={styles.buttonText}>{item}</Text>
          </TouchableOpacity>
        )}
        renderSectionHeader={({ section: { title } }) => (
          <Text style={styles.title}>{title}</Text>
        )}
      />
    </ScrollView>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    marginLeft: 10,
    marginTop: 20,
    backgroundColor: '#fff',
  },
  header: {
    fontSize: 35,
    marginBottom: 20,
  },
  title: {
    fontSize: 20,
    marginBottom: 10,
  },
  item: {
    marginBottom: 10,
    padding: 25,
    backgroundColor: '#007BFF',
    borderRadius: 5,
  },
  buttonText: {
    color: '#fff',
    textAlign: 'center',
  },
  itemFlat: {
    backgroundColor: 'pink',
    marginBottom: 15,
    padding: 20,
    textAlign: 'center',
    fontSize: 15,
    color: '#fff',
  },
});
