import React from 'react';
import { View, Text, StyleSheet, ScrollView, Image } from 'react-native';

const categories = [
    { name: 'Pizza', image: require('../assets/pizza.jpg') },
    { name: 'Burgers', image: require('../assets/burger.jpg') },
    { name: 'Steak', image: require('../assets/steak.jpg') },
];

export default function TopCategories() {
    return (
        <View style={styles.container}>
            <Text style={styles.title}>Top Categories</Text>
            <ScrollView horizontal showsHorizontalScrollIndicator={false}>
                {categories.map((category, index) => (
                    <View key={index} style={styles.category}>
                        <Image source={category.image} style={styles.image} />
                        <Text style={styles.name}>{category.name}</Text>
                    </View>
                ))}
            </ScrollView>
        </View>
    );
}

const styles = StyleSheet.create({
    container: {
        marginBottom: 16,
    },
    title: {
        fontSize: 18,
        fontWeight: 'bold',
        marginBottom: 8,
    },
    category: {
        marginRight: 16,
        alignItems: 'center',
    },
    image: {
        width: 100,
        height: 100,
        borderRadius: 10,
    },
    name: {
        marginTop: 8,
        fontSize: 16,
    },
});