import React from 'react';
import { StyleSheet, View, Text, FlatList } from 'react-native';
import RowNotification from './components/RowNotification';

const DATA = [
  {
    icon: 'home',
    title: 'Thông báo 1',
    des: 'Mô tả thông báo 1',
    date: '20/1/2020, 09:00',
  },
  {
    icon: 'user',
    title: 'Thông báo 2',
    des: 'Mô tả thông báo 2',
    date: '21/1/2020, 10:00',
  },
  {
    icon: 'heart-o',
    title: 'Thông báo 3',
    des: 'Mô tả thông báo 3',
    date: '22/1/2020, 11:00',
  },
  {
    icon: 'check-square',
    title: 'Thông báo 4',
    des: 'Mô tả thông báo 4',
    date: '22/1/2020, 12:00',
  },
  {
    icon: 'toggle-on',
    title: 'Thông báo 5',
    des: 'Mô tả thông báo 5',
    date: '22/1/2020, 13:00',
  },
  {
    icon: 'motorcycle',
    title: 'Thông báo 6',
    des: 'Mô tả thông báo 6',
    date: '22/1/2020, 14:00',
  },
];

const Home = () => {
  return (
    <View style={styles.container}>
      <Text style={styles.titleText}>Thông báo</Text>
      <FlatList
        data={DATA}
        renderItem={({ item }) => (  <RowNotification icon={item.icon} title={item.title} des={item.des} date={item.date} />)}
        keyExtractor={(item, index) => index.toString()}
        contentContainerStyle={styles.flatListContainer} 
      />
    </View>
  );
};
const styles = StyleSheet.create({
  titleText: {
    fontSize: 20,
    fontWeight: '600',
    textAlign: 'center',
    marginTop: '8%',
  },
  container: {
    flex: 1,
    backgroundColor: '#f1f1f1',
  },
  flatListContainer: {
    paddingBottom: 10, 
  },
});
export default Home;
